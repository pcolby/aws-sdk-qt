// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMICROSOFTADRESPONSE_H
#define QTAWS_CREATEMICROSOFTADRESPONSE_H

#include "directoryserviceresponse.h"
#include "createmicrosoftadrequest.h"

namespace QtAws {
namespace DirectoryService {

class CreateMicrosoftADResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT CreateMicrosoftADResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    CreateMicrosoftADResponse(const CreateMicrosoftADRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMicrosoftADRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMicrosoftADResponse)
    Q_DISABLE_COPY(CreateMicrosoftADResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
