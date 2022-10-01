// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSLATEREQUEST_H
#define QTAWS_TRANSLATEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawstranslateglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Translate {

class TranslateRequestPrivate;

class QTAWSTRANSLATE_EXPORT TranslateRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Translate.
    enum Action {
        CreateParallelDataAction,
        DeleteParallelDataAction,
        DeleteTerminologyAction,
        DescribeTextTranslationJobAction,
        GetParallelDataAction,
        GetTerminologyAction,
        ImportTerminologyAction,
        ListLanguagesAction,
        ListParallelDataAction,
        ListTerminologiesAction,
        ListTextTranslationJobsAction,
        StartTextTranslationJobAction,
        StopTextTranslationJobAction,
        TranslateTextAction,
        UpdateParallelDataAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    TranslateRequest(const Action action);
    TranslateRequest(const TranslateRequest &other);
    TranslateRequest &operator=(const TranslateRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const TranslateRequest &other) const;


protected:
    /// @cond internal
    explicit TranslateRequest(TranslateRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TranslateRequest)

};

} // namespace Translate
} // namespace QtAws

#endif
