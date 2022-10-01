// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCESERVERRESPONSE_H
#define QTAWS_DELETESOURCESERVERRESPONSE_H

#include "drsresponse.h"
#include "deletesourceserverrequest.h"

namespace QtAws {
namespace Drs {

class DeleteSourceServerResponsePrivate;

class QTAWSDRS_EXPORT DeleteSourceServerResponse : public DrsResponse {
    Q_OBJECT

public:
    DeleteSourceServerResponse(const DeleteSourceServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSourceServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSourceServerResponse)
    Q_DISABLE_COPY(DeleteSourceServerResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
