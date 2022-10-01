// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUREVIEWERREQUEST_H
#define QTAWS_CODEGURUREVIEWERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscodegurureviewerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodeGuruReviewer {

class CodeGuruReviewerRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT CodeGuruReviewerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodeGuruReviewer.
    enum Action {
        AssociateRepositoryAction,
        CreateCodeReviewAction,
        DescribeCodeReviewAction,
        DescribeRecommendationFeedbackAction,
        DescribeRepositoryAssociationAction,
        DisassociateRepositoryAction,
        ListCodeReviewsAction,
        ListRecommendationFeedbackAction,
        ListRecommendationsAction,
        ListRepositoryAssociationsAction,
        ListTagsForResourceAction,
        PutRecommendationFeedbackAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CodeGuruReviewerRequest(const Action action);
    CodeGuruReviewerRequest(const CodeGuruReviewerRequest &other);
    CodeGuruReviewerRequest &operator=(const CodeGuruReviewerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CodeGuruReviewerRequest &other) const;


protected:
    /// @cond internal
    explicit CodeGuruReviewerRequest(CodeGuruReviewerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeGuruReviewerRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
