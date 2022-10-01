// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESRESPONSE_H
#define QTAWS_DESCRIBEIMAGESRESPONSE_H

#include "ecrpublicresponse.h"
#include "describeimagesrequest.h"

namespace QtAws {
namespace EcrPublic {

class DescribeImagesResponsePrivate;

class QTAWSECRPUBLIC_EXPORT DescribeImagesResponse : public EcrPublicResponse {
    Q_OBJECT

public:
    DescribeImagesResponse(const DescribeImagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImagesResponse)
    Q_DISABLE_COPY(DescribeImagesResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
