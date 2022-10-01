// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUREVIEWERREQUEST_P_H
#define QTAWS_CODEGURUREVIEWERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class CodeGuruReviewerRequest;

class CodeGuruReviewerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodeGuruReviewerRequest::Action action; ///< CodeGuruReviewer action to be performed.
    QString apiVersion;        ///< CodeGuruReviewer API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodeGuruReviewer request (query string) parameters. @todo?

    CodeGuruReviewerRequestPrivate(const CodeGuruReviewerRequest::Action action, CodeGuruReviewerRequest * const q);
    CodeGuruReviewerRequestPrivate(const CodeGuruReviewerRequestPrivate &other, CodeGuruReviewerRequest * const q);

    static QString toString(const CodeGuruReviewerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodeGuruReviewerRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
