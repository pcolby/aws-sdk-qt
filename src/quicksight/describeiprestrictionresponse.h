// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIPRESTRICTIONRESPONSE_H
#define QTAWS_DESCRIBEIPRESTRICTIONRESPONSE_H

#include "quicksightresponse.h"
#include "describeiprestrictionrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeIpRestrictionResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeIpRestrictionResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeIpRestrictionResponse(const DescribeIpRestrictionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeIpRestrictionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeIpRestrictionResponse)
    Q_DISABLE_COPY(DescribeIpRestrictionResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
