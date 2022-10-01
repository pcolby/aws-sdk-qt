// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXTENDEDSOURCESERVERRESPONSE_H
#define QTAWS_CREATEEXTENDEDSOURCESERVERRESPONSE_H

#include "drsresponse.h"
#include "createextendedsourceserverrequest.h"

namespace QtAws {
namespace Drs {

class CreateExtendedSourceServerResponsePrivate;

class QTAWSDRS_EXPORT CreateExtendedSourceServerResponse : public DrsResponse {
    Q_OBJECT

public:
    CreateExtendedSourceServerResponse(const CreateExtendedSourceServerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExtendedSourceServerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExtendedSourceServerResponse)
    Q_DISABLE_COPY(CreateExtendedSourceServerResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
