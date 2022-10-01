// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMERESPONSE_H
#define QTAWS_DESCRIBETHEMERESPONSE_H

#include "quicksightresponse.h"
#include "describethemerequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemeResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeThemeResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeThemeResponse(const DescribeThemeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeThemeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThemeResponse)
    Q_DISABLE_COPY(DescribeThemeResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
