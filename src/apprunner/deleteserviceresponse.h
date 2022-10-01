// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVICERESPONSE_H
#define QTAWS_DELETESERVICERESPONSE_H

#include "apprunnerresponse.h"
#include "deleteservicerequest.h"

namespace QtAws {
namespace AppRunner {

class DeleteServiceResponsePrivate;

class QTAWSAPPRUNNER_EXPORT DeleteServiceResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    DeleteServiceResponse(const DeleteServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServiceResponse)
    Q_DISABLE_COPY(DeleteServiceResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
