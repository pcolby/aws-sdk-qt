// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTBUNDLERESPONSE_H
#define QTAWS_EXPORTBUNDLERESPONSE_H

#include "mobileresponse.h"
#include "exportbundlerequest.h"

namespace QtAws {
namespace Mobile {

class ExportBundleResponsePrivate;

class QTAWSMOBILE_EXPORT ExportBundleResponse : public MobileResponse {
    Q_OBJECT

public:
    ExportBundleResponse(const ExportBundleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportBundleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportBundleResponse)
    Q_DISABLE_COPY(ExportBundleResponse)

};

} // namespace Mobile
} // namespace QtAws

#endif
