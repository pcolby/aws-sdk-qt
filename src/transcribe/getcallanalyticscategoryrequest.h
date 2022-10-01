// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCALLANALYTICSCATEGORYREQUEST_H
#define QTAWS_GETCALLANALYTICSCATEGORYREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class GetCallAnalyticsCategoryRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT GetCallAnalyticsCategoryRequest : public TranscribeRequest {

public:
    GetCallAnalyticsCategoryRequest(const GetCallAnalyticsCategoryRequest &other);
    GetCallAnalyticsCategoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCallAnalyticsCategoryRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
