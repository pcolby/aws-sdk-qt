// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSCRIBEREQUEST_H
#define QTAWS_TRANSCRIBEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawstranscribeglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Transcribe {

class TranscribeRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT TranscribeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Transcribe.
    enum Action {
        CreateCallAnalyticsCategoryAction,
        CreateLanguageModelAction,
        CreateMedicalVocabularyAction,
        CreateVocabularyAction,
        CreateVocabularyFilterAction,
        DeleteCallAnalyticsCategoryAction,
        DeleteCallAnalyticsJobAction,
        DeleteLanguageModelAction,
        DeleteMedicalTranscriptionJobAction,
        DeleteMedicalVocabularyAction,
        DeleteTranscriptionJobAction,
        DeleteVocabularyAction,
        DeleteVocabularyFilterAction,
        DescribeLanguageModelAction,
        GetCallAnalyticsCategoryAction,
        GetCallAnalyticsJobAction,
        GetMedicalTranscriptionJobAction,
        GetMedicalVocabularyAction,
        GetTranscriptionJobAction,
        GetVocabularyAction,
        GetVocabularyFilterAction,
        ListCallAnalyticsCategoriesAction,
        ListCallAnalyticsJobsAction,
        ListLanguageModelsAction,
        ListMedicalTranscriptionJobsAction,
        ListMedicalVocabulariesAction,
        ListTagsForResourceAction,
        ListTranscriptionJobsAction,
        ListVocabulariesAction,
        ListVocabularyFiltersAction,
        StartCallAnalyticsJobAction,
        StartMedicalTranscriptionJobAction,
        StartTranscriptionJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateCallAnalyticsCategoryAction,
        UpdateMedicalVocabularyAction,
        UpdateVocabularyAction,
        UpdateVocabularyFilterAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    TranscribeRequest(const Action action);
    TranscribeRequest(const TranscribeRequest &other);
    TranscribeRequest &operator=(const TranscribeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const TranscribeRequest &other) const;


protected:
    /// @cond internal
    explicit TranscribeRequest(TranscribeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TranscribeRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
