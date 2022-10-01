// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTENTSUMMARYREQUEST_H
#define QTAWS_GETCONTENTSUMMARYREQUEST_H

#include "wisdomrequest.h"

namespace QtAws {
namespace Wisdom {

class GetContentSummaryRequestPrivate;

class QTAWSWISDOM_EXPORT GetContentSummaryRequest : public WisdomRequest {

public:
    GetContentSummaryRequest(const GetContentSummaryRequest &other);
    GetContentSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContentSummaryRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
