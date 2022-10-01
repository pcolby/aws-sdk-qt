// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLERESPONSE_H
#define QTAWS_DELETETABLERESPONSE_H

#include "keyspacesresponse.h"
#include "deletetablerequest.h"

namespace QtAws {
namespace Keyspaces {

class DeleteTableResponsePrivate;

class QTAWSKEYSPACES_EXPORT DeleteTableResponse : public KeyspacesResponse {
    Q_OBJECT

public:
    DeleteTableResponse(const DeleteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTableResponse)
    Q_DISABLE_COPY(DeleteTableResponse)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
