// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIALIZESERVICERESPONSE_H
#define QTAWS_INITIALIZESERVICERESPONSE_H

#include "drsresponse.h"
#include "initializeservicerequest.h"

namespace QtAws {
namespace Drs {

class InitializeServiceResponsePrivate;

class QTAWSDRS_EXPORT InitializeServiceResponse : public DrsResponse {
    Q_OBJECT

public:
    InitializeServiceResponse(const InitializeServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InitializeServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitializeServiceResponse)
    Q_DISABLE_COPY(InitializeServiceResponse)

};

} // namespace Drs
} // namespace QtAws

#endif
