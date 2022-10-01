// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESRESPONSE_H
#define QTAWS_PUTACCOUNTDEDICATEDIPWARMUPATTRIBUTESRESPONSE_H

#include "sesv2response.h"
#include "putaccountdedicatedipwarmupattributesrequest.h"

namespace QtAws {
namespace SESv2 {

class PutAccountDedicatedIpWarmupAttributesResponsePrivate;

class QTAWSSESV2_EXPORT PutAccountDedicatedIpWarmupAttributesResponse : public SESv2Response {
    Q_OBJECT

public:
    PutAccountDedicatedIpWarmupAttributesResponse(const PutAccountDedicatedIpWarmupAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAccountDedicatedIpWarmupAttributesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountDedicatedIpWarmupAttributesResponse)
    Q_DISABLE_COPY(PutAccountDedicatedIpWarmupAttributesResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
