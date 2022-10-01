// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFINDINGSPUBLICATIONCONFIGURATIONRESPONSE_H
#define QTAWS_PUTFINDINGSPUBLICATIONCONFIGURATIONRESPONSE_H

#include "macie2response.h"
#include "putfindingspublicationconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class PutFindingsPublicationConfigurationResponsePrivate;

class QTAWSMACIE2_EXPORT PutFindingsPublicationConfigurationResponse : public Macie2Response {
    Q_OBJECT

public:
    PutFindingsPublicationConfigurationResponse(const PutFindingsPublicationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutFindingsPublicationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFindingsPublicationConfigurationResponse)
    Q_DISABLE_COPY(PutFindingsPublicationConfigurationResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
