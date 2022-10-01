// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRAPHRESPONSE_H
#define QTAWS_DELETEGRAPHRESPONSE_H

#include "detectiveresponse.h"
#include "deletegraphrequest.h"

namespace QtAws {
namespace Detective {

class DeleteGraphResponsePrivate;

class QTAWSDETECTIVE_EXPORT DeleteGraphResponse : public DetectiveResponse {
    Q_OBJECT

public:
    DeleteGraphResponse(const DeleteGraphRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGraphRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGraphResponse)
    Q_DISABLE_COPY(DeleteGraphResponse)

};

} // namespace Detective
} // namespace QtAws

#endif
