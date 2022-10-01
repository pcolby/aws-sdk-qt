// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESHARERESPONSE_H
#define QTAWS_DELETERESOURCESHARERESPONSE_H

#include "ramresponse.h"
#include "deleteresourcesharerequest.h"

namespace QtAws {
namespace Ram {

class DeleteResourceShareResponsePrivate;

class QTAWSRAM_EXPORT DeleteResourceShareResponse : public RamResponse {
    Q_OBJECT

public:
    DeleteResourceShareResponse(const DeleteResourceShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteResourceShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteResourceShareResponse)
    Q_DISABLE_COPY(DeleteResourceShareResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
