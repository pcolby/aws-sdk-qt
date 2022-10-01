// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILEUPLOADURLRESPONSE_H
#define QTAWS_GETFILEUPLOADURLRESPONSE_H

#include "mturkresponse.h"
#include "getfileuploadurlrequest.h"

namespace QtAws {
namespace MTurk {

class GetFileUploadURLResponsePrivate;

class QTAWSMTURK_EXPORT GetFileUploadURLResponse : public MTurkResponse {
    Q_OBJECT

public:
    GetFileUploadURLResponse(const GetFileUploadURLRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFileUploadURLRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFileUploadURLResponse)
    Q_DISABLE_COPY(GetFileUploadURLResponse)

};

} // namespace MTurk
} // namespace QtAws

#endif
