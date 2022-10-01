// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHEMEALIASRESPONSE_H
#define QTAWS_DESCRIBETHEMEALIASRESPONSE_H

#include "quicksightresponse.h"
#include "describethemealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeThemeAliasResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeThemeAliasResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeThemeAliasResponse(const DescribeThemeAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeThemeAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThemeAliasResponse)
    Q_DISABLE_COPY(DescribeThemeAliasResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
