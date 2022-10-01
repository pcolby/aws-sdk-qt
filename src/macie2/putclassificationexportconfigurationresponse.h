// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCLASSIFICATIONEXPORTCONFIGURATIONRESPONSE_H
#define QTAWS_PUTCLASSIFICATIONEXPORTCONFIGURATIONRESPONSE_H

#include "macie2response.h"
#include "putclassificationexportconfigurationrequest.h"

namespace QtAws {
namespace Macie2 {

class PutClassificationExportConfigurationResponsePrivate;

class QTAWSMACIE2_EXPORT PutClassificationExportConfigurationResponse : public Macie2Response {
    Q_OBJECT

public:
    PutClassificationExportConfigurationResponse(const PutClassificationExportConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutClassificationExportConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutClassificationExportConfigurationResponse)
    Q_DISABLE_COPY(PutClassificationExportConfigurationResponse)

};

} // namespace Macie2
} // namespace QtAws

#endif
