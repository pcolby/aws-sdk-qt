// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELANGUAGEMODELREQUEST_H
#define QTAWS_DESCRIBELANGUAGEMODELREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class DescribeLanguageModelRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT DescribeLanguageModelRequest : public TranscribeRequest {

public:
    DescribeLanguageModelRequest(const DescribeLanguageModelRequest &other);
    DescribeLanguageModelRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLanguageModelRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
