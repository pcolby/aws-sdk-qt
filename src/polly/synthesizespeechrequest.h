// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNTHESIZESPEECHREQUEST_H
#define QTAWS_SYNTHESIZESPEECHREQUEST_H

#include "pollyrequest.h"

namespace QtAws {
namespace Polly {

class SynthesizeSpeechRequestPrivate;

class QTAWSPOLLY_EXPORT SynthesizeSpeechRequest : public PollyRequest {

public:
    SynthesizeSpeechRequest(const SynthesizeSpeechRequest &other);
    SynthesizeSpeechRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SynthesizeSpeechRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
