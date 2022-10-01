// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPVERSIONTEMPLATERESPONSE_H
#define QTAWS_DESCRIBEAPPVERSIONTEMPLATERESPONSE_H

#include "resiliencehubresponse.h"
#include "describeappversiontemplaterequest.h"

namespace QtAws {
namespace ResilienceHub {

class DescribeAppVersionTemplateResponsePrivate;

class QTAWSRESILIENCEHUB_EXPORT DescribeAppVersionTemplateResponse : public ResilienceHubResponse {
    Q_OBJECT

public:
    DescribeAppVersionTemplateResponse(const DescribeAppVersionTemplateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppVersionTemplateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppVersionTemplateResponse)
    Q_DISABLE_COPY(DescribeAppVersionTemplateResponse)

};

} // namespace ResilienceHub
} // namespace QtAws

#endif
