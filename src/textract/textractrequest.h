// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TEXTRACTREQUEST_H
#define QTAWS_TEXTRACTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawstextractglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Textract {

class TextractRequestPrivate;

class QTAWSTEXTRACT_EXPORT TextractRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Textract.
    enum Action {
        AnalyzeDocumentAction,
        AnalyzeExpenseAction,
        AnalyzeIDAction,
        DetectDocumentTextAction,
        GetDocumentAnalysisAction,
        GetDocumentTextDetectionAction,
        GetExpenseAnalysisAction,
        StartDocumentAnalysisAction,
        StartDocumentTextDetectionAction,
        StartExpenseAnalysisAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    TextractRequest(const Action action);
    TextractRequest(const TextractRequest &other);
    TextractRequest &operator=(const TextractRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const TextractRequest &other) const;


protected:
    /// @cond internal
    explicit TextractRequest(TextractRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TextractRequest)

};

} // namespace Textract
} // namespace QtAws

#endif
