// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTPREFERENCESRESPONSE_H
#define QTAWS_DESCRIBEACCOUNTPREFERENCESRESPONSE_H

#include "efsresponse.h"
#include "describeaccountpreferencesrequest.h"

namespace QtAws {
namespace Efs {

class DescribeAccountPreferencesResponsePrivate;

class QTAWSEFS_EXPORT DescribeAccountPreferencesResponse : public EfsResponse {
    Q_OBJECT

public:
    DescribeAccountPreferencesResponse(const DescribeAccountPreferencesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAccountPreferencesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountPreferencesResponse)
    Q_DISABLE_COPY(DescribeAccountPreferencesResponse)

};

} // namespace Efs
} // namespace QtAws

#endif
