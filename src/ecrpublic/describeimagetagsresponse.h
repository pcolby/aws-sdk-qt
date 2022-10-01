// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGETAGSRESPONSE_H
#define QTAWS_DESCRIBEIMAGETAGSRESPONSE_H

#include "ecrpublicresponse.h"
#include "describeimagetagsrequest.h"

namespace QtAws {
namespace EcrPublic {

class DescribeImageTagsResponsePrivate;

class QTAWSECRPUBLIC_EXPORT DescribeImageTagsResponse : public EcrPublicResponse {
    Q_OBJECT

public:
    DescribeImageTagsResponse(const DescribeImageTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeImageTagsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImageTagsResponse)
    Q_DISABLE_COPY(DescribeImageTagsResponse)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
