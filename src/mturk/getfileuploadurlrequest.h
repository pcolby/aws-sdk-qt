// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILEUPLOADURLREQUEST_H
#define QTAWS_GETFILEUPLOADURLREQUEST_H

#include "mturkrequest.h"

namespace QtAws {
namespace MTurk {

class GetFileUploadURLRequestPrivate;

class QTAWSMTURK_EXPORT GetFileUploadURLRequest : public MTurkRequest {

public:
    GetFileUploadURLRequest(const GetFileUploadURLRequest &other);
    GetFileUploadURLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFileUploadURLRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
