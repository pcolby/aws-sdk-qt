// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBJECTRESPONSE_H
#define QTAWS_DESCRIBEOBJECTRESPONSE_H

#include "mediastoredataresponse.h"
#include "describeobjectrequest.h"

namespace QtAws {
namespace MediaStoreData {

class DescribeObjectResponsePrivate;

class QTAWSMEDIASTOREDATA_EXPORT DescribeObjectResponse : public MediaStoreDataResponse {
    Q_OBJECT

public:
    DescribeObjectResponse(const DescribeObjectRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeObjectRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeObjectResponse)
    Q_DISABLE_COPY(DescribeObjectResponse)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
