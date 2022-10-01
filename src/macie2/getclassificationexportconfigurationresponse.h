// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLASSIFICATIONEXPORTCONFIGURATIONRESPONSE_H
#define QTAWS_GETCLASSIFICATIONEXPORTCONFIGURATIONRESPONSE_H

#include "macie2response.h"
#include "getclassificationexportconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class GetClassificationExportConfigurationResponsePrivate;

class QTAWSMACIE2_EXPORT GetClassificationExportConfigurationResponse : public Macie2Response {
    Q_OBJECT

public:
    GetClassificationExportConfigurationResponse(const GetClassificationExportConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetClassificationExportConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetClassificationExportConfigurationResponse)
    Q_DISABLE_COPY(GetClassificationExportConfigurationResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
