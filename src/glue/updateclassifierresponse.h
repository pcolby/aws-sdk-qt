// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLASSIFIERRESPONSE_H
#define QTAWS_UPDATECLASSIFIERRESPONSE_H

#include "glueresponse.h"
#include "updateclassifierrequest.h"

namespace QtAws {
namespace Glue {

class UpdateClassifierResponsePrivate;

class QTAWSGLUE_EXPORT UpdateClassifierResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateClassifierResponse(const UpdateClassifierRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateClassifierRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClassifierResponse)
    Q_DISABLE_COPY(UpdateClassifierResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
