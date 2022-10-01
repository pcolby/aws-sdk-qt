// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEFFECTIVEDEPLOYMENTSRESPONSE_H
#define QTAWS_LISTEFFECTIVEDEPLOYMENTSRESPONSE_H

#include "greengrassv2response.h"
#include "listeffectivedeploymentsrequest.h"

namespace QtAws {
namespace GreengrassV2 {

class ListEffectiveDeploymentsResponsePrivate;

class QTAWSGREENGRASSV2_EXPORT ListEffectiveDeploymentsResponse : public GreengrassV2Response {
    Q_OBJECT

public:
    ListEffectiveDeploymentsResponse(const ListEffectiveDeploymentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEffectiveDeploymentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEffectiveDeploymentsResponse)
    Q_DISABLE_COPY(ListEffectiveDeploymentsResponse)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
