// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVALUATESESSIONREQUEST_H
#define QTAWS_EVALUATESESSIONREQUEST_H

#include "voiceidrequest.h"

namespace QtAws {
namespace VoiceId {

class EvaluateSessionRequestPrivate;

class QTAWSVOICEID_EXPORT EvaluateSessionRequest : public VoiceIdRequest {

public:
    EvaluateSessionRequest(const EvaluateSessionRequest &other);
    EvaluateSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EvaluateSessionRequest)

};

} // namespace VoiceId
} // namespace QtAws

#endif
