// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECALLANALYTICSCATEGORYREQUEST_H
#define QTAWS_CREATECALLANALYTICSCATEGORYREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class CreateCallAnalyticsCategoryRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT CreateCallAnalyticsCategoryRequest : public TranscribeRequest {

public:
    CreateCallAnalyticsCategoryRequest(const CreateCallAnalyticsCategoryRequest &other);
    CreateCallAnalyticsCategoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCallAnalyticsCategoryRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
