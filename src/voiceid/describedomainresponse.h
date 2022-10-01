// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINRESPONSE_H
#define QTAWS_DESCRIBEDOMAINRESPONSE_H

#include "voiceidresponse.h"
#include "describedomainrequest.h"

namespace QtAws {
namespace VoiceId {

class DescribeDomainResponsePrivate;

class QTAWSVOICEID_EXPORT DescribeDomainResponse : public VoiceIdResponse {
    Q_OBJECT

public:
    DescribeDomainResponse(const DescribeDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDomainResponse)
    Q_DISABLE_COPY(DescribeDomainResponse)

};

} // namespace VoiceId
} // namespace QtAws

#endif
