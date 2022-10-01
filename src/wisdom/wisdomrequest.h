// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WISDOMREQUEST_H
#define QTAWS_WISDOMREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawswisdomglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Wisdom {

class WisdomRequestPrivate;

class QTAWSWISDOM_EXPORT WisdomRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Wisdom.
    enum Action {
        CreateAssistantAction,
        CreateAssistantAssociationAction,
        CreateContentAction,
        CreateKnowledgeBaseAction,
        CreateSessionAction,
        DeleteAssistantAction,
        DeleteAssistantAssociationAction,
        DeleteContentAction,
        DeleteKnowledgeBaseAction,
        GetAssistantAction,
        GetAssistantAssociationAction,
        GetContentAction,
        GetContentSummaryAction,
        GetKnowledgeBaseAction,
        GetRecommendationsAction,
        GetSessionAction,
        ListAssistantAssociationsAction,
        ListAssistantsAction,
        ListContentsAction,
        ListKnowledgeBasesAction,
        ListTagsForResourceAction,
        NotifyRecommendationsReceivedAction,
        PutFeedbackAction,
        QueryAssistantAction,
        RemoveKnowledgeBaseTemplateUriAction,
        SearchContentAction,
        SearchSessionsAction,
        StartContentUploadAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateContentAction,
        UpdateKnowledgeBaseTemplateUriAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    WisdomRequest(const Action action);
    WisdomRequest(const WisdomRequest &other);
    WisdomRequest &operator=(const WisdomRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const WisdomRequest &other) const;


protected:
    /// @cond internal
    explicit WisdomRequest(WisdomRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WisdomRequest)

};

} // namespace Wisdom
} // namespace QtAws

#endif
