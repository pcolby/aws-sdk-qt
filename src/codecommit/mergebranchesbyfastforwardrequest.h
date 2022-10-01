// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MERGEBRANCHESBYFASTFORWARDREQUEST_H
#define QTAWS_MERGEBRANCHESBYFASTFORWARDREQUEST_H

#include "codecommitrequest.h"

namespace QtAws {
namespace CodeCommit {

class MergeBranchesByFastForwardRequestPrivate;

class QTAWSCODECOMMIT_EXPORT MergeBranchesByFastForwardRequest : public CodeCommitRequest {

public:
    MergeBranchesByFastForwardRequest(const MergeBranchesByFastForwardRequest &other);
    MergeBranchesByFastForwardRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MergeBranchesByFastForwardRequest)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
