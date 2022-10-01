// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATESERVICELASTACCESSEDDETAILSRESPONSE_H
#define QTAWS_GENERATESERVICELASTACCESSEDDETAILSRESPONSE_H

#include "iamresponse.h"
#include "generateservicelastaccesseddetailsrequest.h"

namespace QtAws {
namespace Iam {

class GenerateServiceLastAccessedDetailsResponsePrivate;

class QTAWSIAM_EXPORT GenerateServiceLastAccessedDetailsResponse : public IamResponse {
    Q_OBJECT

public:
    GenerateServiceLastAccessedDetailsResponse(const GenerateServiceLastAccessedDetailsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GenerateServiceLastAccessedDetailsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GenerateServiceLastAccessedDetailsResponse)
    Q_DISABLE_COPY(GenerateServiceLastAccessedDetailsResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
