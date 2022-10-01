// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLTHROUGHCACHERULERESPONSE_H
#define QTAWS_CREATEPULLTHROUGHCACHERULERESPONSE_H

#include "ecrresponse.h"
#include "createpullthroughcacherulerequest.h"

namespace QtAws {
namespace Ecr {

class CreatePullThroughCacheRuleResponsePrivate;

class QTAWSECR_EXPORT CreatePullThroughCacheRuleResponse : public EcrResponse {
    Q_OBJECT

public:
    CreatePullThroughCacheRuleResponse(const CreatePullThroughCacheRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePullThroughCacheRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePullThroughCacheRuleResponse)
    Q_DISABLE_COPY(CreatePullThroughCacheRuleResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
