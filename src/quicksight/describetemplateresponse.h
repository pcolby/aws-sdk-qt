// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETEMPLATERESPONSE_H
#define QTAWS_DESCRIBETEMPLATERESPONSE_H

#include "quicksightresponse.h"
#include "describetemplaterequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeTemplateResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT DescribeTemplateResponse : public QuickSightResponse {
    Q_OBJECT

public:
    DescribeTemplateResponse(const DescribeTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTemplateResponse)
    Q_DISABLE_COPY(DescribeTemplateResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
