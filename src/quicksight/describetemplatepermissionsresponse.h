// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATEPERMISSIONSRESPONSE_H
#define QTAWS_DESCRIBETEMPLATEPERMISSIONSRESPONSE_H

#include "quicksightresponse.h"
#include "describetemplatepermissionsrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplatePermissionsResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeTemplatePermissionsResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeTemplatePermissionsResponse(const DescribeTemplatePermissionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTemplatePermissionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTemplatePermissionsResponse)
    Q_DISABLE_COPY(DescribeTemplatePermissionsResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
