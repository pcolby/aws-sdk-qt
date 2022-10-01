// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPULLTHROUGHCACHERULERESPONSE_H
#define QTAWS_DELETEPULLTHROUGHCACHERULERESPONSE_H

#include "ecrresponse.h"
#include "deletepullthroughcacherulerequest.h"

namespace QtAws {
namespace Ecr {

class DeletePullThroughCacheRuleResponsePrivate;

class QTAWSECR_EXPORT DeletePullThroughCacheRuleResponse : public EcrResponse {
    Q_OBJECT

public:
    DeletePullThroughCacheRuleResponse(const DeletePullThroughCacheRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePullThroughCacheRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePullThroughCacheRuleResponse)
    Q_DISABLE_COPY(DeletePullThroughCacheRuleResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
