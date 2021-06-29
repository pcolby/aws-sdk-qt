/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    CodeGuruReviewerRequestPrivate * const d_ptr; ///< Internal d-pointer.
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
