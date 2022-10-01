// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDRTLOGBUCKETRESPONSE_H
#define QTAWS_ASSOCIATEDRTLOGBUCKETRESPONSE_H

#include "shieldresponse.h"
#include "associatedrtlogbucketrequest.h"

namespace QtAws {
namespace Shield {

class AssociateDRTLogBucketResponsePrivate;

class QTAWSSHIELD_EXPORT AssociateDRTLogBucketResponse : public ShieldResponse {
    Q_OBJECT

public:
    AssociateDRTLogBucketResponse(const AssociateDRTLogBucketRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateDRTLogBucketRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDRTLogBucketResponse)
    Q_DISABLE_COPY(AssociateDRTLogBucketResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
