// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELAUNCHCONFIGURATIONTEMPLATESRESPONSE_H
#define QTAWS_DESCRIBELAUNCHCONFIGURATIONTEMPLATESRESPONSE_H

#include "mgnresponse.h"
#include "describelaunchconfigurationtemplatesrequest.h"

namespace QtAws {
namespace Mgn {

class DescribeLaunchConfigurationTemplatesResponsePrivate;

class QTAWSMGN_EXPORT DescribeLaunchConfigurationTemplatesResponse : public MgnResponse {
    Q_OBJECT

public:
    DescribeLaunchConfigurationTemplatesResponse(const DescribeLaunchConfigurationTemplatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLaunchConfigurationTemplatesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLaunchConfigurationTemplatesResponse)
    Q_DISABLE_COPY(DescribeLaunchConfigurationTemplatesResponse)

};

} // namespace Mgn
} // namespace QtAws

#endif
