// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSPUBLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_GETFINDINGSPUBLICATIONCONFIGURATIONRESPONSE_H

#include "macie2response.h"
#include "getfindingspublicationconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsPublicationConfigurationResponsePrivate;

class QTAWSMACIE2_EXPORT GetFindingsPublicationConfigurationResponse : public Macie2Response {
    Q_OBJECT

public:
    GetFindingsPublicationConfigurationResponse(const GetFindingsPublicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFindingsPublicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFindingsPublicationConfigurationResponse)
    Q_DISABLE_COPY(GetFindingsPublicationConfigurationResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
