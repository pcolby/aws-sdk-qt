// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATEALIASRESPONSE_H
#define QTAWS_DESCRIBETEMPLATEALIASRESPONSE_H

#include "quicksightresponse.h"
#include "describetemplatealiasrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplateAliasResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeTemplateAliasResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeTemplateAliasResponse(const DescribeTemplateAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTemplateAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTemplateAliasResponse)
    Q_DISABLE_COPY(DescribeTemplateAliasResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
