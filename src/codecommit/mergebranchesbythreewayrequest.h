// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYTHREEWAYREQUEST_H
#define QTAWS_MERGEBRANCHESBYTHREEWAYREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesByThreeWayRequestPrivate;

class QTAWSCODECOMMIT_EXPORT MergeBranchesByThreeWayRequest : public CodeCommitRequest {

public:
    MergeBranchesByThreeWayRequest(const MergeBranchesByThreeWayRequest &other);
    MergeBranchesByThreeWayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeBranchesByThreeWayRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
