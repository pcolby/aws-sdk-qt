// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTERESOURCESHARECREATEDFROMPOLICYRESPONSE_H
#define QTAWS_PROMOTERESOURCESHARECREATEDFROMPOLICYRESPONSE_H

#include "ramresponse.h"
#include "promoteresourcesharecreatedfrompolicyrequest.h"

namespace QtAws {
namespace Ram {

class PromoteResourceShareCreatedFromPolicyResponsePrivate;

class QTAWSRAM_EXPORT PromoteResourceShareCreatedFromPolicyResponse : public RamResponse {
    Q_OBJECT

public:
    PromoteResourceShareCreatedFromPolicyResponse(const PromoteResourceShareCreatedFromPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PromoteResourceShareCreatedFromPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PromoteResourceShareCreatedFromPolicyResponse)
    Q_DISABLE_COPY(PromoteResourceShareCreatedFromPolicyResponse)

};

} // namespace Ram
} // namespace QtAws

#endif
