// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZEUTTERANCEREQUEST_H
#define QTAWS_RECOGNIZEUTTERANCEREQUEST_H

#include "lexruntimev2request.h"

namespace QtAws {
namespace LexRuntimeV2 {

class RecognizeUtteranceRequestPrivate;

class QTAWSLEXRUNTIMEV2_EXPORT RecognizeUtteranceRequest : public LexRuntimeV2Request {

public:
    RecognizeUtteranceRequest(const RecognizeUtteranceRequest &other);
    RecognizeUtteranceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecognizeUtteranceRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
