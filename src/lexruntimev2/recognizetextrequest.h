// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECOGNIZETEXTREQUEST_H
#define QTAWS_RECOGNIZETEXTREQUEST_H

#include "lexruntimev2request.h"

namespace QtAws {
namespace LexRuntimeV2 {

class RecognizeTextRequestPrivate;

class QTAWSLEXRUNTIMEV2_EXPORT RecognizeTextRequest : public LexRuntimeV2Request {

public:
    RecognizeTextRequest(const RecognizeTextRequest &other);
    RecognizeTextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecognizeTextRequest)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
