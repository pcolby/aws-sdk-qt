// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SELECTOBJECTCONTENTRESPONSE_H
#define QTAWS_SELECTOBJECTCONTENTRESPONSE_H

#include "s3response.h"
#include "selectobjectcontentrequest.h"

namespace QtAws {
namespace S3 {

class SelectObjectContentResponsePrivate;

class QTAWSS3_EXPORT SelectObjectContentResponse : public S3Response {
    Q_OBJECT

public:
    SelectObjectContentResponse(const SelectObjectContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SelectObjectContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SelectObjectContentResponse)
    Q_DISABLE_COPY(SelectObjectContentResponse)

};

} // namespace S3
} // namespace QtAws

#endif
