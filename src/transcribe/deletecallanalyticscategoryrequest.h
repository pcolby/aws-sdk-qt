// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECALLANALYTICSCATEGORYREQUEST_H
#define QTAWS_DELETECALLANALYTICSCATEGORYREQUEST_H

#include "transcriberequest.h"

namespace QtAws {
namespace Transcribe {

class DeleteCallAnalyticsCategoryRequestPrivate;

class QTAWSTRANSCRIBE_EXPORT DeleteCallAnalyticsCategoryRequest : public TranscribeRequest {

public:
    DeleteCallAnalyticsCategoryRequest(const DeleteCallAnalyticsCategoryRequest &other);
    DeleteCallAnalyticsCategoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCallAnalyticsCategoryRequest)

};

} // namespace Transcribe
} // namespace QtAws

#endif
