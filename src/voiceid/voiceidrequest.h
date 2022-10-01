// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VOICEIDREQUEST_H
#define QTAWS_VOICEIDREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsvoiceidglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace VoiceId {

class VoiceIdRequestPrivate;

class QTAWSVOICEID_EXPORT VoiceIdRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by VoiceId.
    enum Action {
        CreateDomainAction,
        DeleteDomainAction,
        DeleteFraudsterAction,
        DeleteSpeakerAction,
        DescribeDomainAction,
        DescribeFraudsterAction,
        DescribeFraudsterRegistrationJobAction,
        DescribeSpeakerAction,
        DescribeSpeakerEnrollmentJobAction,
        EvaluateSessionAction,
        ListDomainsAction,
        ListFraudsterRegistrationJobsAction,
        ListSpeakerEnrollmentJobsAction,
        ListSpeakersAction,
        ListTagsForResourceAction,
        OptOutSpeakerAction,
        StartFraudsterRegistrationJobAction,
        StartSpeakerEnrollmentJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDomainAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    VoiceIdRequest(const Action action);
    VoiceIdRequest(const VoiceIdRequest &other);
    VoiceIdRequest &operator=(const VoiceIdRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const VoiceIdRequest &other) const;


protected:
    /// @cond internal
    explicit VoiceIdRequest(VoiceIdRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VoiceIdRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
